method_id("sum");
  context_stream();
    copy(arg(1), retstream(integer));
      reduce("+");
    _end();
    ret(take(1));
