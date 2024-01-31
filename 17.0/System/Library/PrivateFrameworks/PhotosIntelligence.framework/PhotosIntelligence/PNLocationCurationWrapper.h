@class NSString;

@interface PNLocationCurationWrapper : NSObject <PNLocationCuratable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)fetchLimit;
+ (id)representativeAssetsForMapDisplayFromAssets:(id)a0;
+ (id)requiredFetchPropertySets;


@end
