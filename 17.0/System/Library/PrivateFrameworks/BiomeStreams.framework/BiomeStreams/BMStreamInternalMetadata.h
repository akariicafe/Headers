@class NSString;

@interface BMStreamInternalMetadata : NSObject

@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *radarComponent;
@property (readonly, nonatomic) BOOL publiclyIndexable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSummary:(id)a0 description:(id)a1 eventName:(id)a2 radarComponent:(id)a3 publiclyIndexable:(BOOL)a4;

@end
