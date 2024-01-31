@class NSString, UPDataDetectors;

@interface CDMDateTimeProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    UPDataDetectors *_upDataDetectors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildMatchingSpan:(id)a0 tokenChain:(id)a1;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)initWithDataDetectorPath:(id)a0 locale:(id)a1;
- (id)matchSpansForTokenChain:(id)a0;

@end
