@class NSUUID, NSString, NSArray;

@interface NSSWatchFace : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *faceIdentifier;
@property (retain, nonatomic) NSString *faceDisplayName;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSArray *selectedFocusModeIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
