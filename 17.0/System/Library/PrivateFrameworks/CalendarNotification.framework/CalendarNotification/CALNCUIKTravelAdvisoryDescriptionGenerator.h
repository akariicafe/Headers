@class NSString;

@interface CALNCUIKTravelAdvisoryDescriptionGenerator : NSObject <CALNTravelAdvisoryDescriptionGenerator>

@property (class, readonly, nonatomic) CALNCUIKTravelAdvisoryDescriptionGenerator *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)travelAdvisoryDescriptionOfType:(unsigned long long)a0 hypothesis:(id)a1 location:(id)a2;

@end
