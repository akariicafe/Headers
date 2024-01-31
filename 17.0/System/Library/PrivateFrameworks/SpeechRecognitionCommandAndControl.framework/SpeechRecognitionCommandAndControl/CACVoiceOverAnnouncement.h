@class NSString;

@interface CACVoiceOverAnnouncement : NSObject

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 type:(long long)a1 completion:(id /* block */)a2;

@end
