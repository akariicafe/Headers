@class NSString, NSArray;

@interface IAMMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *messageGroupIdentifier;
@property (readonly, nonatomic) NSArray *contentPages;
@property (readonly, nonatomic) BOOL requiresCloseButton;

- (id)initWithIdentifier:(id)a0 messageGroupIdentifier:(id)a1 contentPages:(id)a2 requiresCloseButton:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithICInAppMessageEntry:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
