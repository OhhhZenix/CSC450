public class ModuleEight {

  public static void main(String[] args) {
    // create threads
    Thread threadOne = new Thread(new CountUp());
    Thread threadTwo = new Thread(new CountDown());
    // start threads
    threadOne.start();
    threadTwo.start();
    // wait till threads finish
    try {
      threadOne.join();
      threadTwo.join();
    } catch (InterruptedException e) {
      e.printStackTrace();
    }
  }
}
