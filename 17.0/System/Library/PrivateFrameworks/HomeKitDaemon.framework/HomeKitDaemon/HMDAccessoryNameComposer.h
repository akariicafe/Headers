@class NSString;

@interface HMDAccessoryNameComposer : NSObject

@property (retain, nonatomic) NSString *rawAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSString *rawRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) BOOL roomNameAtEndSeparatedByWhitespace;
@property (readonly, nonatomic) NSString *composedString;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawAccessoryName:(id)a0 rawRoomName:(id)a1;

@end
