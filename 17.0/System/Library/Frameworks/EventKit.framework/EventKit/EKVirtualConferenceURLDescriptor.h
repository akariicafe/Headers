@class NSString, NSURL;

@interface EKVirtualConferenceURLDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 URL:(id)a1;

@end
