#ifndef MEL_VISITOR18_HPP
#define MEL_VISITOR18_HPP

namespace melbourne {
  namespace grammar18 {
    rb_parser_state *parser_alloc_state();
    void *pt_allocate(rb_parser_state *st, int size);
    void pt_free(rb_parser_state *st);

    void create_error(rb_parser_state *parser_state, char *msg);
    NODE *parser_node_newnode(rb_parser_state*, enum node_type, VALUE, VALUE, VALUE);
  };
};

#endif
