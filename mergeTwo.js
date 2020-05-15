
// merge two sorted lists js 



function ListNode(val, next) {
    this.val = (val===undefined ? 0 : val)
    this.next = (next===undefined ? null : next)
}

var mergeTwoLists = function(l1, l2) {
  let final = new ListNode();
  let ptr = final;
  while (l1 != null&& l2 !=null) {
    if (l1.val <= l2.val) {
      ptr.next = l1;
      l1 = l1.next;
    } else {
      ptr.next = l2;
      l2 = l2.next;
    }
    ptr = ptr.next;
  }

  if (l1 === null) {
    ptr.next = l2;
  }

  if (l2 === null) {
    ptr.next = l1;
  }

  return final.next;
};

const lz = {
val: 1,
next: { 
  val: 2, 
  next: { 
    val: 4, next: null 
  } 
} 
};

const ly = {
val: 1,
next: { 
  val: 3, 
  next: { 
    val: 4, next: null 
  } 
} 
};

mergeTwoLists(lz, ly);