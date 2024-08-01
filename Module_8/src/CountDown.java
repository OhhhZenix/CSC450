public class CountDown implements Runnable {

  @Override
  public void run() {
    synchronized (System.out) {
      for (int i = 20; i >= 0; i--) {
        System.out.println("Counter Down: " + i);
      }
    }
  }
}
