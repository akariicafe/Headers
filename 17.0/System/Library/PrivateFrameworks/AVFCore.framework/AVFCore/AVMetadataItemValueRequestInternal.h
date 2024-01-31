@class NSString, AVWeakReference, NSError;
@protocol NSObject, NSCopying;

@interface AVMetadataItemValueRequestInternal : NSObject {
    AVWeakReference *weakReferenceToMetadataItem;
    id<NSObject, NSCopying> value;
    NSString *dataType;
    NSError *error;
}

@end
