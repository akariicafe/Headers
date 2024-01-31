@class NSString, TIWordEntryAligned;

@interface TIDPNgramWordEntryPair : NSObject

@property (retain, nonatomic) NSString *wordString;
@property (retain, nonatomic) TIWordEntryAligned *wordEntryAligned;
@property (readonly, nonatomic, getter=isStandaloneString) BOOL standaloneString;

- (void).cxx_destruct;
- (id)initWithWordString:(id)a0;
- (id)initWithWordString:(id)a0 wordEntryAligned:(id)a1;

@end
