@interface PK_ipp_request_t : PK_ipp_t

- (id)init;
- (id)_descriptionLeader;
- (void)_setupNewRequest;
- (id)initWithOp:(unsigned short)a0;
- (id)opString;

@end
