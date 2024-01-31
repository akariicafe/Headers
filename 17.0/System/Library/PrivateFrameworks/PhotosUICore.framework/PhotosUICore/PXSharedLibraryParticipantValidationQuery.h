@class NSString;

@interface PXSharedLibraryParticipantValidationQuery : NSObject

@property (readonly, nonatomic) NSString *address;
@property (nonatomic) BOOL isValid;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
