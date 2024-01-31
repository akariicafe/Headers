@class NSString, NSData;

@interface NWConnProperties : NSObject

@property (nonatomic) BOOL isTracker;
@property (nonatomic) BOOL isNonAppInitiated;
@property (nonatomic) BOOL isSilent;
@property (nonatomic) BOOL hasNetAccess;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *domainOwner;
@property (retain, nonatomic) NSString *domainTrackerContext;
@property (retain, nonatomic) NSString *domainAttributedBundleId;
@property (retain, nonatomic) NSData *remoteAddress;
@property (readonly, nonatomic) unsigned short remotePort;

- (id)description;
- (void).cxx_destruct;

@end
