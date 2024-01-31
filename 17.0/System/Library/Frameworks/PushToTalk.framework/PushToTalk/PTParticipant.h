@class CXParticipant, NSString, UIImage;

@interface PTParticipant : NSObject

@property (readonly, nonatomic) CXParticipant *underlyingParticipant;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *image;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageFileURL;
- (id)initWithName:(id)a0 image:(id)a1;

@end
