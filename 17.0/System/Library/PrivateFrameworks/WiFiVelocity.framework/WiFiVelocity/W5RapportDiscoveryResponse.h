@class NSArray, NSString;

@interface W5RapportDiscoveryResponse : NSObject <W5RapportResponse>

@property (retain, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResults:(id)a0;

@end
