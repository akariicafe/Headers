@class NSUUID, NSString, NSDate;

@interface HFOrderedHomeKitItemData : NSObject

@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *dateAdded;
@property (copy, nonatomic) NSString *actionSetType;

+ (id)dataWithUniqueIdentifier:(id)a0 title:(id)a1 dateAdded:(id)a2;

- (void).cxx_destruct;

@end
