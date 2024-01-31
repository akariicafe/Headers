@class NSString, NSURL;

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSURL *pictureURL;
@property (retain) NSString *category;
@property double latitude;
@property double longitude;
@property double distance;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)encodableProperties;

@end
