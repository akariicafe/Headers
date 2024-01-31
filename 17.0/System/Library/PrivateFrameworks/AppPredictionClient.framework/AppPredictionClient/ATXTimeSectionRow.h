@class NSArray, NSDateComponents, NSString;

@interface ATXTimeSectionRow : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) BOOL isCurrent;
@property (readonly, nonatomic) long long prominence;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEvents:(id)a0 accessories:(id)a1 dateComponents:(id)a2 isCurrent:(BOOL)a3 prominence:(long long)a4 identifier:(id)a5;

@end
