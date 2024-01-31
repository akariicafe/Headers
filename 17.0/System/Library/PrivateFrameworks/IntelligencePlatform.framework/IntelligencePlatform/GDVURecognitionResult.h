@class NSUUID;

@interface GDVURecognitionResult : NSObject {
    void /* unknown type, empty encoding */ _tag;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ entityIdentifier;
@property (nonatomic, readonly) NSUUID *tag;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ confidence;

- (id)init;
- (void).cxx_destruct;

@end
