@class NSString;

@interface PLJournalChecksumContext : NSObject {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _context;
    NSString *_finalizedChecksum;
}

- (void)update:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)finalizedChecksum;

@end
