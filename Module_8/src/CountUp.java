public class CountUp implements Runnable {

  @Override
  public void run() {
    synchronized (System.out) {
      for (int i = 0; i <= 20; i++) {
        System.out.println("Counter Up: " + i);
      }
    }
  }
}
