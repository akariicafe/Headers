@class NSUUID, NSArray, NSData, NSString, NSNumber;

@interface CVAUserEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSData *anchorData;
@property (retain, nonatomic) NSArray *transformCameraToAnchor;
@property (retain, nonatomic) NSString *peerDisplayName;
@property (retain, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSNumber *movLowestTimestamp;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(unsigned long long)a0 timestamp:(double)a1;

@end
