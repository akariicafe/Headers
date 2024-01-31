@class NSArray;

@interface DockKitCore.FollowerMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ observations;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, copy) NSArray *observations;
@property (nonatomic, retain) void /* unknown type, empty encoding */ portType;
@property (nonatomic) void /* unknown type, empty encoding */ orientation;
@property (nonatomic, retain) void /* unknown type, empty encoding */ intrinsics;
@property (nonatomic) void /* unknown type, empty encoding */ referenceWidth;
@property (nonatomic) void /* unknown type, empty encoding */ referenceHeight;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
