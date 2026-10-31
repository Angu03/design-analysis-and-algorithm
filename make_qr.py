import os, urllib.parse
import qrcode

USER = "Angu03"
REPO = "design-analysis-and-algorithm"
BRANCH = "main"

OUT = "qr_codes"
os.makedirs(OUT, exist_ok=True)

for f in sorted(os.listdir(".")):
    if not os.path.isfile(f) or f.startswith(".") or f == "make_qr.py":
        continue
    url = f"https://github.com/{USER}/{REPO}/blob/{BRANCH}/{urllib.parse.quote(f)}"
    qrcode.make(url).save(os.path.join(OUT, f + ".png"))
    print(f, "->", url)
