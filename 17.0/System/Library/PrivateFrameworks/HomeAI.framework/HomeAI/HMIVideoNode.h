@class NSError;

@interface HMIVideoNode : HMFObject {
    long long _status;
    NSError *_error;
}

@property (readonly) long long status;
@property (readonly) NSError *error;

- (void).cxx_destruct;

@end
