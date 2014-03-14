method_id("sum");
  context_stream();
    copy_do(arg(1), retstream(integer));
      reduce("+");
    copy_end();
    ret(take(1));
