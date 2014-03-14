method_id("sum");
  context_stream();
    transfer(arg(1), retstream(integer));
      reduce("+");
    method_end();
    
    
comment("we get a list");
comment("see http://jsfiddle.net/6ZFvE/2/");
comment("see http://codepad.org/sv4fvDKK");


