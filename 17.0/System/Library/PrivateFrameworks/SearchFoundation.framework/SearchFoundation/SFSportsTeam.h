@class SFButtonItem, NSString, NSDictionary, NSData, SFImage;

@interface SFSportsTeam : NSObject <SFSportsTeam, NSSecureCoding, NSCopying> {
    struct { unsigned char isWinner : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFImage *logo;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SFButtonItem *button;
@property (nonatomic) BOOL isWinner;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasIsWinner;

@end
