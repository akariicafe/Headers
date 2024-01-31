@class NSNumber, MRIRRoute, NSString;

@interface MRURecommendation : NSObject <MRRouteRecommendation>

@property (nonatomic) long long classification;
@property (copy, nonatomic) NSNumber *sortingHint;
@property (retain, nonatomic) MRIRRoute *route;
@property (retain, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendationWithIRCandidateResult:(id)a0;

- (void).cxx_destruct;

@end
