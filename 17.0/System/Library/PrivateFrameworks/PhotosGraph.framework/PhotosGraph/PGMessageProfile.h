@class PHPhotoLibrary, NSSet, NSMutableDictionary;

@interface PGMessageProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSSet *personalChatIdentifiers;
@property (readonly, nonatomic) NSSet *groupChatIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *cnIdentifiersByChatIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *personalChatIdentifierByContactIdentifier;
@property (retain, nonatomic) NSMutableDictionary *numberOfMessagesPerChatIdentifier;
@property (retain, nonatomic) NSMutableDictionary *addressMentionsByContactIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *numberOfLoveEmojisByPersonLocalIdentifier;

+ (id)persistedMessageProfileWithPhotoLibrary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)enumerateContactIdentifiersAndMentionedAddressesUsingBlock:(id /* block */)a0;
- (void)enumerateMessageGroupsWithProgressBlock:(id /* block */)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonLocalIdentifiersExchangingLoveEmojisWithProgressBlock:(id /* block */)a0 usingBlock:(id /* block */)a1;
- (id)initWithGroupChatIdentifiers:(id)a0 personalChatIdentifiers:(id)a1 personsByChatIdentifier:(id)a2 photoLibrary:(id)a3;
- (unsigned long long)numberOfMessageGroupChats;
- (id)numberOfMessagesByContactIdentifier;
- (BOOL)persistOnDisk;
- (void)registerLoveEmoji:(unsigned long long)a0 forPersonLocalIdentifier:(id)a1;
- (void)registerMentionedLocation:(id)a0 contactIdentifier:(id)a1 onDate:(id)a2;
- (void)registerMessageForChatIdentifier:(id)a0;

@end
