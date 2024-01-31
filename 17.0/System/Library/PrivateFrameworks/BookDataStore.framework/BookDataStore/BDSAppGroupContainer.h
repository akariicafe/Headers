@class NSURL;

@interface BDSAppGroupContainer : NSObject

@property (class, getter=isUnitTesting) BOOL unitTesting;
@property (class, readonly) NSURL *containerURL;
@property (class, readonly) NSURL *documentsURL;

+ (id)containerIdentifier;

@end
