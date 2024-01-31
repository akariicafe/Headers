@class NSString, NSSet;

@interface PGMeaningSummarizedFeature : NSObject <PGSummarizedFeature>

@property (readonly, nonatomic) NSString *meaningLabel;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) BOOL isMandatoryForKeyAsset;
@property (readonly, nonatomic) NSSet *intervalsPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIntervalsPresent:(id)a0 isMandatoryForKeyAsset:(BOOL)a1 meaningLabel:(id)a2;

@end
