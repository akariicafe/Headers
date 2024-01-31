@class NSString;
@protocol SWLogger;

@interface SWDatastoreFactory : NSObject <SWDatastoreFactory>

@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLogger:(id)a0;
- (void).cxx_destruct;
- (id)createDatastoreFromMessage:(id)a0;

@end
