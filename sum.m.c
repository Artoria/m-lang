method_id("sum");
  context_stream();
    transfer(arg(1), retstream(integer));
      reduce("+");
    _end();
    ret(take(1));
