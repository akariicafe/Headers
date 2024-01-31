@class NSString, NSData;

@interface SLRequestMultiPart : NSObject {
    NSString *_uniqueIdentifier;
}

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *multiPartBoundary;

+ (id)multiPartWithName:(id)a0 payload:(id)a1 type:(id)a2 multiPartBoundary:(id)a3;

- (unsigned long long)length;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)multiPartHeader;
- (id)payloadPreamble;
- (id)payloadEpilogue;
- (id)partData;

@end
