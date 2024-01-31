@class NSString, CHPrefixQueryItem;

@interface PKHashtagQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *hashtagResult;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;
- (id)strokeIdentifiers;

@end
