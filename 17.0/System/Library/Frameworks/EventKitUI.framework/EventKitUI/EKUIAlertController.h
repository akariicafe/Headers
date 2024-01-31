@interface EKUIAlertController : UIAlertController {
    BOOL _prohibitsRotation;
}

@property (nonatomic) BOOL prohibitsRotation;

- (unsigned long long)supportedInterfaceOrientations;

@end
