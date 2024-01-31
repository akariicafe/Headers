@class MPModelStoreBrowseResponseParser, MPChangeDetails;

@interface MPModelStoreBrowseResponse : MPModelResponse

@property (retain, nonatomic) MPModelStoreBrowseResponseParser *parser;
@property (retain, nonatomic) MPChangeDetails *changeDetails;
@property (readonly, nonatomic) BOOL hasAdditionalContentItems;

- (void).cxx_destruct;

@end
