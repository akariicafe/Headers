@class NSNumber, NSString, UIImage;
@protocol VUIFamilyMemberDelegate;

@interface VUIFamilyMember : NSObject

@property (retain, nonatomic) NSNumber *memberIdentifier;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) BOOL sharingPurchases;
@property (retain, nonatomic) UIImage *memberImage;
@property (weak, nonatomic) id<VUIFamilyMemberDelegate> delegate;

- (unsigned long long)hash;
- (void).cxx_destruct;

@end
