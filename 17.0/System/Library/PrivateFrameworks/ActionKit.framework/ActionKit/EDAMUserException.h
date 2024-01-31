@class NSNumber, NSString;

@interface EDAMUserException : FATException

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *parameter;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
