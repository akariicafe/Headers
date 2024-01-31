@class PPMClientUserClientInterface, NSString;

@interface PPMClient : NSObject

@property (retain) PPMClientUserClientInterface *userClient;
@property unsigned int connect;
@property (retain) NSString *identifier;
@property unsigned int version;

+ (id)sharedInstanceWithClientRepresentation:(id)a0 error:(id *)a1;
+ (id)sharedInstanceWithClientRepresentation:(id)a0 options:(id)a1 error:(id *)a2;

- (BOOL)initWithClient:(id)a0 error:(id *)a1;
- (BOOL)endInteraction:(id *)a0;
- (BOOL)admissionCheckWithLevel:(id)a0 options:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (BOOL)registerForNotificationsWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)activityStoppedWithLevel:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithClientIdentifier:(id)a0;
- (BOOL)pushTelemetryToPPM:(struct __CFDictionary { } *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (int)getClientNumber:(id)a0;
- (BOOL)setupIOKitUserClientWith:(id)a0 error:(id *)a1;
- (BOOL)activityStartedWithLevel:(id)a0 options:(id)a1 error:(id *)a2;

@end
