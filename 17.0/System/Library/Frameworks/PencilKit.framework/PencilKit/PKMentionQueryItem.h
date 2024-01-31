@class NSString, CHPrefixQueryItem;

@interface PKMentionQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *mentionResult;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;
- (id)strokeIdentifiers;

@end
