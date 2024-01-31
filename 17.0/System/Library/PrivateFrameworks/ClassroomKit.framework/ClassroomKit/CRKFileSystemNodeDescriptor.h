@class NSString, NSData;

@interface CRKFileSystemNodeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSData *content;

+ (id)dataDescriptorWithFileName:(id)a0 content:(id)a1;
+ (id)directoryDescriptorWithFileName:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 fileName:(id)a1 content:(id)a2;

@end
