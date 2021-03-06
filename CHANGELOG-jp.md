# 更新履歴



## [0.3.2] - 2019-01-06

### 追加

- Autopick機能を強化。これらの新機能は概ねomake互換
  - カテゴリーベースのアイテム選択をサポート
  - アイテムの修飾語をサポート


### 変更

- 「決定」アクションと「自動行動」アクションを統合
- Autopickにおいて、ファイル名の代わりにサウンドIDを使うように
  - 例) 旧: `atk_chaos.wav`  新: `core.atk_chaos`
  - このバージョンではこれらのIDは`mods\core\data\sound.lua`で定義されている


### 修正

- [本家] 3つの関所マップが屋内扱いだったのを修正
- 一つ前のアイテム描写データがノイエル聖夜祭の前後で残るのを修正
- 上り階段と下り階段の位置が逆になって保存されていたのを修正
- 調達依頼でアイテムを交換した後、異なるアイテムの名前が表示されるのを修正
- 北東/北西キーによる+100/-100単位での数値入力が動いていなかったのを修正
- 欠損していたプレイヤー所有物件のデータを追加。帰還のときにクラッシュを引き起こしていた
- 斜め移動が誤ったキーに割り当てられていたのを修正
- 本家のとあるイースターエッグコマンドが一つ前のバージョンで使えなくなっていたのを修正
- キャラシートでポートレイトメニューを開くキーである`p`が16番目のメニュー選択キーと干渉していたのを修正。一つ前のバージョンでは選択キーとしての`p`が使えなくなっていた
- ログウィンドウでの1ページスクロールにおいて、一番上/下の行が飛ばされるのを修正
- デバフ(hex)を除こうとすると落ちるのを修正。例) 清浄なる光の魔法、全浄化の巻物など
- タイポ修正



## [0.3.1] - 2018-12-17

### 修正

- 起動時に落ちるのを修正
- Elona foobar を日本語が入ったフォルダに入れていた場合落ちるのを修正



## [0.3.0] - 2018-12-15

### 追加

- 新しいショートカットキー `Ctrl+Tab` を追加。一つ前の(左の)メニューへ移動する
- `Shift+Backspace` でオートピックの定義ファイルを再読み込みできるように
- 大事な仲間が遺伝子合成で失われないように。聴診器を使うことで大事な仲間に指定できる
- キーバインディングを実装。設定画面の一番下にあるキーバインディング画面から設定できる
- 現在のFPS(frame per second)を表示するオプションを追加(デフォルト: オフ)
- Luaを使ってコンソールを再実装。Luaのコードをコンソール上で走らせることができる
- キャラクタのドロップアイテムデータを外部化
- ブラックジャックの描画を改善
  - キャラクタ画像を原寸大で表示するように
  - カードのスートを表示するように
  - カードのランクを画像として表示するように
- E+Cからメインシナリオの英語翻訳を移植
- ほとんどのマップ定義データを外部化
- 店で売られている商品のデータを外部化
- 店で売買する際の確認プロンプトを省略できるオプションを追加(デフォルト: オフ)
- メッセージログをスクロールできるように(1000行分保持する)。利用可能なショートカットは以下の通り:
  - `Up`: 一行上へスクロール (古い方へ)
  - `Down`: 一行下へスクロール (新しい方へ)
  - `Left`: 一ページ上へスクロール (古い方へ)
  - `Right`: 一ページ下へスクロール (新しい方へ)
- 英語モードにおけるルードルボの名前を変更("yeek" → "\<Rodlob\> the boss of yeeks")
  - この名前は、日本語でそうであるように Angband のモンスターである "Boldor" のスペルを反転させたもの
- 影のグラフィックを改善
- テキストのアンチエイリアスを有効にするオプションを追加(default: オン)。また、アンチエイリアスが有効なときのテキスト描写をより美しいものとするため同梱するフォントを東風ゴシックから源真ゴシックへ変更
- マナが足りない状態で詠唱しようとしたときの確認ウィンドウを省略するオプションを追加(デフォルト: オフ)
- 読み込もうとしているセーブデータが互換性のあるものかどうかを調べ、今動いている Elona foobar がそれを読み込めない場合エラーを報告するように
- 依存関係を用いて MOD を適切な順番で読み込むように
- ポートレイトシステムを改善。違う性別のポートレイトやNPC用のポートレイトを選べるようになった
- Windowsにおいて `Elona_foobar.exe` にアイコンを追加


### 変更

- 周りにペットがいない状態で鏡台を使ったとき方向を尋ねないように
- 矢弾を切り替えるメッセージの前で改行するように
- 冒険者の名前をニュースに表示するように
- 生もの装備を食べたときのメッセージの順番を変更


### 修正

- [本家] 「何かが地面に落ちた」のメッセージはアイテムが地面にある場合には表示しないように
- [本家] 見た目の変更メニューにおける PCC のアスペクト比を修正
- [本家] ダブルベッドと幸せのベッドのグラフィックが切れていたのを修正
- [本家] 選択キーの周りに表示されるゴミを削除
- [本家] 天候が変わった際、メッセージログウィンドウに現れる空白を削除
- [本家] 綴り鎧のアイテムチップが高すぎる場所にスタックするのを修正
- [本家] クミロミを信仰していると食べ物が腐らないことがあるのを修正
- [本家] エーテル病の進行度が上限を超えて進むことがあるのを修正
- [本家] 英語のテキストにおける省略記号をピリオド三つで置き換え。英語のフォントの中にはこの文字を持っていないものがあるため
- [本家] 死者の洞窟のグローバルマップにおける位置を一つ右に移動。以前の位置は崖の上であり、不正な位置であった。そのためそれぞれのセーブデータで異なる位置に配置される可能性があり、また稀に地殻変動のたびに死者の洞窟が動くようになっていた
- シナリオのシーン再生においてフェードアウトが機能していなかったのを修正
- スキルレベルが非常に高い(四桁)とスキルトラックの表示が被るのを修正
- 生産メニューにおけるアイテムの色が正しくないのを修正
- デフォルトのBGMが正しく読み込まれないのを修正
- 乱数生成器が各プラットフォームで同じ乱数を生成しないのを修正
- テキスト入力ボックスにおいて `Ctrl+V` (クリップボードから貼り付け) がリピートするのを修正
- macOS のテキスト入力ボックスにおいて IME が変換したテキストを見ることができないのを修正
- 仲間を選択する画面において仲間を正しく選択できないのを修正
- アイテムのグラフィックが別のものに置き換わることがあるのを修正
- 女性の盗賊団の頭領が黒塗りのポートレイトになるのを修正
- 虚空を這いずる者との会話が `Shift` や `ESC` でキャンセルできないのを修正
- タイポ修正



## [0.2.8] - 2018-09-15

### 追加

- シナリオシーンにおける文字の影を調整
- ログウィンドウに分を`[05]`のようにして0を埋めた状態で表示
- セーブデータの可搬性を向上。特にエンディアン
  - Elona foobarは常にデータをリトルエンディアンで保存します。ビッグエンディアンのマシンで動かした場合、foobarは読み込み時と保存時にデータを変換します


### 削除

- 古い本家のデータ(v1.22より前)へのサポートを削除
  - 将来的にはインポート・エクスポートができるようにする予定です
- 古いfoobarのデータ(v0.2.6かそれ以前)へのサポートを削除
  - v0.2.8(このバージョン)で読み込む前に、v0.2.7でデータをアップデートしてください


### 修正

- [本家] シェルターの上でシェルターを建設するとスタックするのを修正
- [本家] ウィンドウサイズが十分に大きいとき、小さいマップの左下の描写がおかしくなるのを修正
- 特殊弾のエンチャントが付与されないのを修正
- 生き武器が15のエンチャントを持っていて血を吸うとき、一番最後のエンチャントを破壊しないのを修正
- 祭壇の上に置いた水が祝福されないのを修正
- アイテムが火炎で燃やされた/冷気で破壊されたときクラッシュするのを修正
- キャラクターの口調が一つの会話の中で変化するのを修正(日本語モードのみ)
- ハウスボードから見られる"家の情報"ウィンドウにおいてキーヒントが抜けていたのを追加
- 最も価値の高いアイテムしか家宝に載っていなかったのを修正
- ポートレート中の黒のドット(`#000`)が透過していたのを修正
- 破壊アニメーションを再生する際、その場所が見えない場合は再生しないように
- セーブデータ選択画面において一度ページを変えるとウィンドウの影が消えるのを修正
- 取得できないフィートが取得できるのを修正。たとえば、交渉スキルを持っていなくとも交渉フィートを取ることができた
- タイポを修正



## [0.2.7] - 2018-09-05

### 追加

- ElonaFoobarからElona foobarに名称を変更
- LuaのAPIを多数追加。詳細はdocsフォルダを参照のこと
- 実験的にAndroidのサポートを追加
- セーブデータの読み込みを格段に高速化
- 本家の模様替え機能を実装
  - また、Ctrlキーと左クリックで塗りつぶしを実装
- ダメージポップアップ機能を拡張
  - ポップアップの数を変更するオプションを追加
  - バフが追加された/消えたときポップアップを表示
  - 属性ダメージと回復に色をつけて表示
- 設定メニューで各設定に説明を追加
- 原寸大PCC表示をサポート
- スキルトラック機能を拡張
  - 使えるスキルトラックの数を拡張(3->10)
  - スキルの潜在能力も一緒に表示
  - 高い潜在能力は緑で、低い潜在能力は赤で表示
- omake EN、omake overhaul EN、omake overhaul EN hackの翻訳を移植。これらを主に翻訳されたDoorknob氏に感謝申し上げます
- 設定ファイルをJSONからHCL形式に変更
  - ほとんどすべての設定がゲーム内から変えられるようになっています。おそらく直接触る必要はないでしょう
- 分針を左上の時計に追加


### 修正

- [本家] カジノでカードが配られているときの入力は保持しないように
- [本家] 金貨/プラチナがオーバーフローするのを修正
- [本家] 幸運を維持する装備を食べると落ちるのを修正
  - これを避けるため幸運の成長バフを新たに追加
- [本家] 収穫依頼の報酬がオーバーフローするのを修正
- [本家] Elonaのウィンドウサイズが800x600以外だったとき、レシピウィンドウのY座標がずれるのを修正
- プレイヤーダンジョンの名前が表示されないのを修正
- Enterキーのリピートがときどき速くなりすぎるのを修正
- テキストを多数修正
- カレントディレクトリが実行ファイルのディレクトリと異なるとき、Luaのrequire()が失敗するのを修正
- 売るとき、ログウィンドウに間違った金額が表示されるのを修正
- 左上の時計の下にゴミが表示されるのを修正
- 特定の場面で数値入力がループしないのを修正
- 日本語モードでハートマークが間違った場所に表示されるのを修正
- [w]earメニュー中の表示不具合を修正
- バブルのような分裂生物に関わるクラッシュを修正
- READMEのCONTRIBUTING.mdへのリンクを更新
- 呪われた食べ物が食べた後も消えないのを修正
- 火炎/冷気ダメージと耐火/耐冷ブランケットのおかしな挙動を修正
  - アイテム破壊がなくともブランケットが分かれるのを修正
  - 冷気ダメージについてのメッセージがPCが見えないところで起きたものに関しても表示されるのを修正
  - 耐火ブランケットの挙動がPCの視界に応じて変わるのを修正
- 特定条件下で斜めに歩けなくなるのを修正
- タイポを修正。主に英語
- ウィザードモードでも願いで異名が変えられるのを修正
- 犯罪者でなくとも願いでカルマが変動するのを修正



## [0.2.6] - 2018-06-19

### 追加

- 整数のオプションが不正な値になっていないか検証し、適正な範囲に制限するように
- テンキーの5が他のテンキーと同様に動くように
- 本家の"autonumlock"機能を実装 (Windowsのみ)
- omakeのような数値入力を実装
- Enter/BackSpaceキーのキー感度を調整
- omakeのような異名ロックを実装
  - `key_mode2`(デフォルトでは`*`)キーで異名をロックできる。ロックされた異名はリロールしても変わらない
- 選択した異名は異名ロール画面に戻って来たとき復元されるように
- キャラメイクの最終決定画面からポートレイトを選ぶ画面に戻れるように
- キャラメイクの際に最後の名前入力ボックスをキャンセルできるように
- 店売りの商品をスタックするように
- LuaのAPIを追加: `LuaCharacter.experience`


### 修正

- いくつかのエラーが表示されないのを修正
- README.mdとREADME-jp.mdを現在の状態に合うよう修正
- キャラクタレベル経験値のOFを修正
- 犯罪者のときダルフィで売買ができなくなるのを修正
- foobarに同梱されているフォントを使用している際のログウィンドウのグリッチを修正
- foobarのバージョン情報がセーブファイルに保存されていなかったのを修正
- 一時インベントリを開いた際に地面のアイテムが透明になるのを修正
  - 例えばブラックジャックや四次元ポケットなど
  - また、透明なアイテムがマップ再生成の際に複製されていたのを修正
- 上記のバグにより壊れたマップデータを修正
- foobarが日本語を含むフォルダに置かれていた場合にクラッシュするのを修正
  - この問題を避けるため、セーブデータの名前のつけ方を`sav_{プレイヤー名}`から`df04-0b4b-d0cc-a11b`のようなランダムに生成された名前に変更
- AIルーチンの無限ループを修正
- Autopickの"保存"マーク(`*`)が日本語のアイテム名の一部と鑑賞するのを修正
  - 保存マークは`*`から`%`に変更



## [0.2.5] - 2018-06-10

### 追加

- 実験的にLua APIを導入
- カジノでエーテル抗体をもらえる確率を引き上げ
  - omakeと同じ
- ダメージポップアップの処理速度改善
- キー入力の感度改善
- 影の描写を改善
- 画面サイズ、フルスクリーンのオプションを追加
- いくつかのNPCに専用ポートレイトを設定
- `animewait`の設定に基づいてアニメーションの長さを削減
- 生成数をデッキメニューに表示
- 入力画面で入力する文字数を制限
- ダメージポップアップの切り替えオプションを追加(`damage_popup`)
- PCの体重を計算する式を調整


### 削除

- すでに必要なくなった`original\config.txt`はコピーしないように
- マグルモードではミニマップに階段の位置を表示しないように


### 修正

- [本家] Elona不具合修正Wikiにある既知のバグを修正
  - 多すぎるのでまた後で
- [本家] 混沌三神が願いの杖を落とさなかったのを修正
- [本家] とある条件下でシナリオ進行中にPCが死ぬのを修正
- [本家] 神の下僕のようなペットのユニークNPCと会話できないのを修正
- [本家] 壁やドアで埋められたマップに入ると無限ループになるのを修正
- カジノのブラックジャックが辞められないのを修正
- シナリオをオンにしていても再生されないのを修正
- 日本語での名前を省略して表示するアルゴリズムを修正
- Shiftキーとテンキーで走れないのを修正
- テンキー側のEnterキーが効かないのを修正
- Enterキーが時々効かなくなるのを修正
- マグルモードで名声が願えてしまうのを修正
- 生き武器にエンチャントを付与できなかったのを修正
- ウィザードモードでアイテムやスキルが願えなかったのを修正
- boneファイルが日本語で文字化けするのを修正
- PCの名前をより厳格にチェックするように
- デッキを使ったときにクラッシュするのを修正
- キャラメイクの際PCC選択画面から一度戻ると、PCCの画面が飛ばされるのを修正
- 日本語のtypo修正



## [0.2.4] - 2018-05-20

### 修正

- セーブデータがGzip圧縮されていたのを修正
- フィートメニューにおいてフィート/変異/エーテル病に色がついていなかったのを修正



## [0.2.3] - 2018-05-19

### 追加

- ゲーム内からconfig.jsonのオプションの一部を変更できるように
  - Extra種族/職業
  - アニメウェイト/アラートウェイト
  - キーウェイト(初回)/キーウェイト
- 入荷頻度をオプションから変更できるように
  - 0-10まで(日単位。デフォルト3日)。0を選ぶと話しかけるたびに品揃えが変わる


### 修正

- 吟遊詩人の演奏でPCが経験値を得るのを修正
- BOM付きのUTF-8ファイルでも読み込めるよう修正
- ダメージポップアップが多すぎると極端に遅くなるのを修正
  - oomExと同様、同時に出現するポップアップの数に制限を設けた
- ダメージポップアップがマップを切り替えても残り続けるのを修正
- SEが鳴らないことがあるのを修正
- 時々BGMが頭から再生し直されるのを修正
- PC速度が遅くNPCが多いとスタックオーバーフローを起こすのを修正
- ファイル名/フォルダ名として不正な名前のPCを作ろうとすると落ちるのを修正
  - ファイル名/フォルダ名に使える名前に変換される
- 貴重なものでインベントリが埋まっている際にアイテム破壊が起こると無限ループが起こるのを修正
- アイテム破壊が起こると落ちることがあるのを修正
- タイポ修正(日本語)
- ジャーナルを開くと落ちることがあるのを修正
- ジャーナルにやたらと空行が混じっていたのを修正
- 数値入力がESC/Shiftキーでキャンセルできないのを修正
- ボール魔法やボルト魔法などで属性の色が反映されていなかったのを修正
- 能力値ロールにおいて、次へ進んでから戻ってくると残りロックが0になるのを修正
- 依頼掲示板でキーの効きが極端に悪くなるのを修正
- ゲーム内ヘルプが文字化けするのを修正
- PCの店で店主を任命する際、魅力と交渉の欄の表示がおかしくなるのを修正
- 採掘スキルが低いと壁が絶対に掘れないのを修正



## [0.2.2] - 2018-05-05

### 追加

- オートセーブを無効化するように
  - オプションメニューから再度有効にできます
- README.mdを現在の状況に合わせて更新
- 日本語版のREADMEであるREADME-jp.mdを追加


### 修正

- [本家] 洞窟を出ずに死ぬと洞窟から出られなくなるのを修正
- `key_close`のデフォルト値が`key_charainfo`と被る"c"になっていたのを修正
- 以下のクラッシュを修正:
  - 魔法使いの夢を見ると落ちる
  - 呪われていない/祝福された不思議な巻物を読むと落ちる
  - 冒険者から得意なスキルを聞くと落ちる
  - 冒険者からスキルの訓練を受けようとすると落ちる
  - 『リトルシスター』の死体を食べると落ちる
  - トレイナーに話しかけると落ちる
  - 能力獲得の巻物を読むと落ちる
  - 成長の巻物を読むと落ちる



## [0.2.1] - 2018-05-03

### 追加

- エラーログといくつかの情報をruntime/log.txtに出力するように


### 削除

- 本家のカスタムファイル形式への対応を削除
  - これは一時的な措置です。当然再度実装されます


### 修正

- [本家] 引っ越したときに雇用人が消えてしまうのを修正
- [本家] カジノの報酬を生成するのに失敗するとフリーズするのを修正
- 選択したテキストが黒く塗りつぶされているのを修正
- いくつかのライブラリがUnicodeバージョンになっていなかったのを修正
- いくつかのセーブデータが誤ったフォルダに保存されていたのを修正
- セーブフォルダの文字化けを修正
- ダウンロードされたフォルダに日本語が含まれると落ちるのを修正



## [0.2.0] - 2018-05-01

### 追加

- 魚のデータを外部化
  - テスト用に"謎のお魚"を追加
- 採掘モードを実装(oomEx互換)
- バージョニングを導入
- セーブデータにFoobarのバージョンを保存するように
- Wizardモードで祝呪状態を指定できるように
  - 祝福された/呪われていない/呪われた/堕落したをアイテム名の前に置いてください
- 願いの入力の際、[BackSpace]による削除と[Ctrl-V]による貼り付けが使えるように
- ペットのHPバーをomakeのように表示するように
- 紐で繋がれたペットのHPバーの横に紐のアイコンを表示するように
- 実行ファイルが置かれているフォルダを自動検知するように
- 願いの判定方法の向上
- フォントのスタイルをサポート(太字、イタリック体、下線)
- オプションのデフォルト値を定義するように
  - 長いconfig.jsonを用意する必要がなくなる
- ナンバーパッドを試験的にサポート
- ダメージポップアップを試験的に実装
- Autopickを試験的に実装
- デッキを使ったカード収集


### 削除

- 使用できないオプション(`cfg_msg_box`)を削除.
- テスト用のNPCを削除(低レベルにも関わらず強すぎるためテストプレイに支障をきたす)
- 一時的に高品質影描写を無効化
- Voldemortモードをデフォルトで無効化するように
  - [F12]を押すことでvoldemortモードに入ることができる


### 修正

- 体当たりでアインクから果実が落ちるのを修正
- スキルを願うと落ちるのを修正
- アイテムを解呪できないのを修正
- 能力値ロールでFoobarが終了するのを修正
- カジノの描写不具合を修正
- タブ文字が適切に描写されないのを修正
- 窃盗で落ちるのを修正
- 壁から長剣が掘れるのを修正
- シナリオシーンにおいて日本語テキストが中央ぞろえされていないのを修正
- ログウィンドウで日本語テキストの描写が崩れていたのを修正
- 選択カーソルが描写されていなかったのを修正
- ゲーム内からセーブデータが消せなかったのを修正
- タイポ修正(英語)



## [0.1.0] - 2018-04-08

### 追加

- Luaを導入
- データの一部をLuaスクリプトに外部化
- テキストの一部をLuaスクリプトに外部化
- 国際化
- 設定ファイルにJSONを使用
- カスタム種族
- カスタム職業
- カスタムNPC
- ウィザードモードで願うアイテムの個数を指定可能に
- 周りにドアが一つしかないとき閉じる方向を尋ねないように
- 自動採掘(autodig)
- 昇り階段/降り階段の位置をハイライト
- 常にHPバーを表示する
- Shiftキーを押しながらキャラクターと入れ替わる
- クイックセーブ&ロード
- NPCの行動の数の上限を撤廃(10 -> 無制限)
- キャラメイク時に最低値ロール


### 削除

- F12のコンソールコマンドを削除
- 古いバージョン(1.16よりも前)との互換性を放棄


### 修正

多すぎるのでまた後で
