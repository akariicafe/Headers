@class NSString;

@interface CLSEKSharee : NSObject <NSCoding>

@property (readonly) NSString *emailAddress;
@property (readonly) NSString *name;
@property (readonly) BOOL isCurrentUserForSharing;
@property (readonly) BOOL isCurrentUserForScheduling;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEKSharee:(id)a0;

@end
