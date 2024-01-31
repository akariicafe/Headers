@class NSString, NSDate;

@interface ICCloudClientCollaborationEditParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *itemUUID;
@property (readonly, copy, nonatomic) NSString *referencePositionUUID;
@property (readonly, nonatomic) long long positionType;
@property (readonly, nonatomic) unsigned long long itemAdamID;
@property (readonly, copy, nonatomic) NSString *reactionString;
@property (readonly, copy, nonatomic) NSDate *timestamp;

+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)a0 itemUUID:(id)a1 afterReferencePositionUUD:(id)a2;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)a0 itemUUID:(id)a1 atPosition:(long long)a2;
+ (id)paramsForMovingTrackWithItemUUID:(id)a0 afterReferencePositionUUD:(id)a1;
+ (id)paramsForMovingTrackWithItemUUID:(id)a0 toPosition:(long long)a1;
+ (id)paramsForRemovingTrackWithItemUUID:(id)a0;
+ (id)descriptionForPositionType:(long long)a0;
+ (id)paramsForSettingReaction:(id)a0 onTrackWithItemUUID:(id)a1;
+ (id)paramsForUnsettingReaction:(id)a0 onTrackWithItemUUID:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
