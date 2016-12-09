import org.junit.Test;
import static org.junit.Assert.*;


public class BinaryHeapTest {

  @Test
  public void emptyTest() {
    BinaryHeap myHeap = new BinaryHeap();

    // Assert statements
    assertEquals(true, myHeap.isEmpty());
  }

  @Test
  public void insertTest() {
    BinaryHeap myHeap = new BinaryHeap();

    myHeap.insert(500);

    // Assert statements
    assertEquals(500, myHeap.findMin());
  }

  @Test
  public void deleteMinTest() {
    BinaryHeap myHeap = new BinaryHeap();

    myHeap.insert(500);
    myHeap.insert(700);

    // Assert statements
    assertEquals(500, myHeap.deleteMin());
  }

  @Test
  public void deleteTest() {
    BinaryHeap myHeap = new BinaryHeap();

    myHeap.insert(500);
    myHeap.insert(700);
    myHeap.insert(800);

    // Assert
    assertEquals(700, myHeap.delete(0));
  }
}
