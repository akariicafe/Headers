@class NSString;

@interface HFServiceNameComponents : NSObject

@property (retain, nonatomic) NSString *rawServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *rawRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) BOOL roomNameAtEndSeparatedByWhitespace;
@property (readonly, nonatomic) NSString *composedString;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawServiceName:(id)a0 rawRoomName:(id)a1;

@end
