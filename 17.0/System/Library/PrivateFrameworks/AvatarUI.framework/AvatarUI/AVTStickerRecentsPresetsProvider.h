@interface AVTStickerRecentsPresetsProvider : NSObject

+ (void)filteredAndPaddedStickerRecordsWithRecents:(id)a0 excludingRecords:(id)a1 paddingMemojiIdentifier:(id)a2 avatarStore:(id)a3 numberOfStickers:(long long)a4 resultBlock:(id /* block */)a5;
+ (id)filteredRecentStickers:(id)a0 withAvailableRecordIdentifiersMap:(id)a1;
+ (id)paddedStickerRecordsWithRecents:(id)a0 excludingRecords:(id)a1 paddingMemojiIdentifier:(id)a2 numberOfStickers:(long long)a3;
+ (id)paddedStickerRecordsWithRecents:(id)a0 paddingMemojiIdentifier:(id)a1 numberOfStickers:(long long)a2;
+ (id)presetsGivenNoMemoji;
+ (id)presetsGivenOneMemojiWithIdentifier:(id)a0;

@end
