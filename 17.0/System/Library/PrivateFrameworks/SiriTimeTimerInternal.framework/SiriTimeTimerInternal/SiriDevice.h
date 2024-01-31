@class NSString, NSData, NSNumber;

@interface SiriDevice : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *accessoryId;
@property (nonatomic, copy) NSString *homeID;
@property (nonatomic, copy) NSString *accessoryType;
@property (nonatomic, copy) NSData *mementoData;
@property (nonatomic, retain) NSNumber *isRespondingDevice;
@property (nonatomic) long long targetMatchType;
@property (nonatomic, copy) NSString *roomID;
@property (nonatomic, retain) NSNumber *isInRespondingRoom;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
