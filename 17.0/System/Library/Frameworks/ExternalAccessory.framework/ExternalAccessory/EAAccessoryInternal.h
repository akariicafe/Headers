@class NSLock, NSString, NSDictionary, NSData, NSArray, NSMutableArray, NSNumber;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject {
    NSLock *_locationLock;
    NSMutableArray *_sessionsList;
}

@property (nonatomic) BOOL connected;
@property (nonatomic) unsigned int connectionID;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareRevisionActive;
@property (copy, nonatomic) NSString *firmwareRevisionPending;
@property (copy, nonatomic) NSString *hardwareRevision;
@property (copy, nonatomic) NSString *dockType;
@property (nonatomic) long long transportType;
@property (copy, nonatomic) NSString *macAddress;
@property (copy, nonatomic) NSString *preferredApp;
@property (copy, nonatomic) NSData *certSerial;
@property (copy, nonatomic) NSData *certData;
@property (copy, nonatomic) NSString *ppid;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSDictionary *protocolDetails;
@property (copy, nonatomic) NSString *coreAccessoryPrimaryUUID;
@property (nonatomic) int classType;
@property (retain, nonatomic) NSDictionary *audioPorts;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) BOOL notPresentInIAPAccessoriesArray;
@property (readonly, nonatomic) NSArray *sessionsList;
@property (retain, nonatomic) NSArray *eqNames;
@property (nonatomic) unsigned int eqIndex;
@property (nonatomic) int locationSentenceTypesMask;
@property (retain, nonatomic) NSDictionary *vehicleInfoSupportedTypes;
@property (retain, nonatomic) NSDictionary *vehicleInfoInitialData;
@property (retain, nonatomic) NSArray *cameraComponents;
@property (retain, nonatomic) NSMutableArray *enqueuedNMEASentences;
@property (retain, nonatomic) NSMutableArray *enqueuedNMEATimestamps;
@property (nonatomic) unsigned long long nmeaSentenceAddCounter;
@property (nonatomic) unsigned long long nmeaSentenceGetCounter;
@property (retain, nonatomic) NSDictionary *protocols;
@property (retain, nonatomic) NSNumber *highestXPCDelay;
@property (retain, nonatomic) NSNumber *highestFrameworkDelay;
@property (retain, nonatomic) NSNumber *averageXPCDelay;
@property (retain, nonatomic) NSNumber *averageFrameworkDelay;
@property (nonatomic) id<EAAccessoryDelegate> delegate;
@property (copy, nonatomic) NSString *bonjourName;
@property (nonatomic) BOOL hasIPConnection;
@property (nonatomic) BOOL isAvailableOverBonjour;
@property BOOL pointOfInterestHandoffEnabled;
@property BOOL createdByCoreAccessories;
@property (copy) id /* block */ pairingCompletionBlock;
@property (copy) id /* block */ WiFiCredentialsCompletionBlock;
@property unsigned long long destinationSharingOptions;

- (id)init;
- (void)dealloc;
- (void)removeSession:(id)a0;
- (void)addSession:(id)a0;

@end
